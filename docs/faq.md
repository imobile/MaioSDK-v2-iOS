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

再生時に問題が発生した場合は、 `MaioRewardedShowCallback` および `MaioInterstitialShowCallback` の `didFail(_:errorCode:)` メソッドを実装することで通知されます。

- [MaioRewardedShowCallback.didFail(_:MaioRewarded, errorCode:Int)](https://github.com/imobile/MaioSDK-v2-iOS/wiki/API-Rererences#optional-func-didfail_-admaiorewarded-errorcode-int-1)
- [MaioInterstitialShowCallback.didFail(_:MaioInterstitial, errorCode:Int)](https://github.com/imobile/MaioSDK-v2-iOS/wiki/API-Rererences#optional-func-didfail_-admaiointerstitial-errorcode-int-1)

## デリゲートメソッドを実装したのに呼ばれません

`MaioRewarded` および `MaioInterstitial` はデリゲートオブジェクトを強参照しません。インスタンスの寿命に注意してください。

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
