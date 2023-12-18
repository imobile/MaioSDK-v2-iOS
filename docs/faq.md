## 用語

<dl>
  <dt>メディア</dt>
  <dd>主にアプリの事を指します。</dd>

  <dt>ゾーン</dt>
  <dd>広告が表示される仮想的な枠です。複数設定する事で、集計単位を分ける事等ができます。</dd>

  <dt>ゾーンID (zoneID) とは</dt>
  <dd>ゾーンの識別子です。</dd>

  <dt>フリークエンシー／リーセンシーによる制限</dt>
  <dd>アプリのユーザーが広告に接触する頻度や間隔（時間）を制限する為の再生キャップです。</dd>
</dl>

## 広告が表示されません

SDK の初期化から広告の配信準備が完了するまで、少々時間が必要です([参考](#sdk-%E3%81%AE%E5%88%9D%E6%9C%9F%E5%8C%96%E5%AE%8C%E4%BA%86%E3%81%BE%E3%81%A7%E3%81%AB%E3%81%8B%E3%81%8B%E3%82%8B%E6%99%82%E9%96%93%E3%81%AF%E3%81%A9%E3%81%AE%E7%A8%8B%E5%BA%A6%E3%81%A7%E3%81%97%E3%82%87%E3%81%86%E3%81%8B))。  
しばらく経過しても広告が再生できない場合には、原因を特定するために [エラーコード](https://github.com/imobile-maio/maio-iOS-SDK/wiki/API-Reference#maiofailreason-enum-1) をご参照ください。


## デリゲートメソッドを実装したのに呼ばれません
[MaioDelegate](https://github.com/imobile-maio/maio-iOS-SDK/wiki/API-Reference#maiodelegate-protocol-1) の設定が完了していない可能性がございます。  
[2. 広告の表示方法](https://github.com/imobile-maio/maio-iOS-SDK/wiki/Get-Started#2-%E5%BA%83%E5%91%8A%E3%81%AE%E8%A1%A8%E7%A4%BA%E6%96%B9%E6%B3%95) の記載の通りデリゲートが設定されているかご確認ください。

## 新規 zoneID の発行方法

現在管理画面を個別で発行しており、同管理画面より新規の zoneID を発行できます。
管理画面の発行にあたり、弊社担当者へ以下の情報をお伝えください。

### 【必要情報】  
- ［必須］管理画面ご登録名
- ［必須］ログイン用メールアドレス
- アプリ名
- ストアURL
- URLスキーム

［必須］について、未リリースの場合は決定している範囲で構いません。

## maio SDK の容量( SDK を アプリ に組み込んだ時のアプリの容量の増加分 )
0.5 MB 程です。

## maio の対応 iOS バージョン

READEME.md に記載しております。
なお、Build target は iOS 12.0 以上としてるため、組み込み自体は左記のバージョン以上であれば可能です。

## 在庫切れなどによる動画広告の再生可否を確認するには、どうすればよいでしょうか

`MaioRewardedLoadCallback` および `MaioInterstitialLoadCallback` の `didLoad(_:)` メソッドを実装することで再生可能になったことが通知されます。

- [MaioRewardedLoadCallback.didLoad(_:MaioRewarded)](https://github.com/imobile/MaioSDK-v2-iOS/wiki/API-Rererences#optional-func-didload_-admaiorewarded)
- [MaioInterstitialCallback.didLoad(_:MaioInterstitial)](https://github.com/imobile/MaioSDK-v2-iOS/wiki/API-Rererences#optional-func-didload_-admaiointerstitial)

読み込みができなかった場合は、 `didFail(_:errorCode:)` メソッドにて通知されます。

- [MaioRewardedLoadCallback.didFail(_:MaioRewarded, errorCode:Int)](https://github.com/imobile/MaioSDK-v2-iOS/wiki/API-Rererences#optional-func-didfail_-admaiorewarded-errorcode-int)
- [MaioInterstitialLoadCallback.didFail(_:MaioInterstitial, errorCode:Int)](https://github.com/imobile/MaioSDK-v2-iOS/wiki/API-Rererences#optional-func-didfail_-admaiointerstitial-errorcode-int)

## SDK の初期化はどうすればよいですか？

本SDKでは、SDKそのものの初期化はありません。

## ゾーンを複数設定した場合、一部のゾーンのみ在庫が切れることはありますか

はい。ゾーンごとにキャンペーンの管理をしているため、あり得ます。

例として、案件数が多いゾーンAと案件数が少ないゾーンBがあったとき、均等に高頻度で広告再生が行われると、ゾーンBで在庫切れが発生する事例があります。
