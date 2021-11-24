#!/usr/bin/env -S node --no-warnings --loader ts-node/esm

/**
 * macOS WeChat.app Tracker
 *  https://github.com/wechaty/mac-wechat-app-tracker/
 *
 */
import { execSync }   from 'child_process'
import {
  writeFileSync,
  readFileSync,
}                     from 'fs'
import { format }     from 'util'

function getWeChatVersion () {
  /**
   * @link https://stackoverflow.com/a/61563525/1123955
   */
  return execSync('defaults read /Applications/WeChat.app/Contents/Info CFBundleShortVersionString')
    .toString().replace(/\n.+$/, '')
}

function gitDiff() {
  const n = execSync('git diff --name-only | wc -l')
    .toString()
    .replace(/\n/, '')
  return Number(n) > 0
}

function gitCommit(message: string) {
  execSync('git -c "user.name=Mike BO" -c "user.email=mike@zixia.net" commit -am "' + message + '"')
}

function gitPush() {
  execSync('git push') // hide token for output
}

function log(...args: any[]) {
  const now = new Date();

  let hour: number | string = now.getHours()
  let min: number | string  = now.getMinutes()
  let sec: number | string  = now.getSeconds()

  let date: number | string  = now.getDate()
  let month: number | string = now.getMonth() + 1

  if (sec < 10) { sec = '0' + sec }
  if (min < 10) { min = '0' + min }
  if (hour < 10) { hour = '0' + hour }

  if (date < 10) { date = '0' + date }
  if (month < 10) { month = '0' + month }

  const desc =  format('%s-%s-%s %s:%s:%s '
                        , now.getFullYear()
                        , (now.getMonth() + 1)
                        , date
                        , hour
                        , min
                        , sec
                      )

  console.log(desc + format.apply(null, args))
}

async function main () {
  const VERSION_HISTORY = './history-version.json'
  const verHistory  = JSON.parse(readFileSync(VERSION_HISTORY, 'utf-8'))

  const wechatyVer = getWeChatVersion()

  if (!gitDiff()) {
    log('nothing new; current: %s', wechatyVer)
    return
  }

  /**
   * check wechatyVersion
   */
  if (!wechatyVer) {
    log('wechatyVersion empty')
    return
  }

  if (wechatyVer in verHistory) {
    const latestVer = verHistory['latest']

    if (latestVer === wechatyVer) {
      log('wechatyVer is the latest, but local has gitDiff()')
    } else {
      const latestVerDate = verHistory[latestVer]
      const historyVerDate = verHistory[wechatyVer]

      log('wechatyVersion found %s[%s] latest %s[%s]. maybe Fifty Shades of Grey?'
          , wechatyVer, historyVerDate
          , latestVer, latestVerDate
      )
      return
    }
  } else {

    /**
     * Save new version to history json file
     */
    verHistory[wechatyVer] = new Date()
    verHistory['latest'] = wechatyVer

    const json = JSON.stringify(verHistory, null, '  ')
    writeFileSync(VERSION_HISTORY, json)
  }

  /**
   * Commit & Push
   */
  gitCommit('WeChat.app v' + wechatyVer)
  gitPush()

  log('new version: %s', wechatyVer)
}

main()
  .catch(console.error)
