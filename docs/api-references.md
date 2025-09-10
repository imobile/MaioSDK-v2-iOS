# API References

## MaioRequest

_2.0.0 +_

```swift
class MaioRequest : NSObject
```

広告リクエストを表すクラス。

### init(zoneId: String, testMode: Bool)

_2.0.0 +_

```swift
init(zoneId: String, testMode: Bool)
```

#### Parameters

- `zoneId`
    - maio の管理画面から発行されるゾーン識別子
- `testMode`
    - テストモードとしてリクエストするかどうかのフラグ。`true`: テストモード有効 `false`: 本番稼働

#### Return Value

`MaioRequest` オブジェクト。


### let zoneId: String

_2.0.0 +_

```swift
let zoneId: String
```

パラメータに与えた、maio の管理画面から発行されるゾーン識別子。


### let testMode

_2.0.0 +_

```swift
let testMode : Bool
```

パラメータに与えた、テストモードとしてリクエストするかどうかのフラグ。
`true`: テストモード有効 `false`: 本番稼働

## MaioInterstitial

_2.0.0 +_

```swift
class MaioInterstitial: NSObject
```

インタースティシャル広告の読み込みと表示を管理するクラス。

### static func loadAd(request: MaioRequest, callback: MaioInterstitialLoadCallback?) -> MaioInterstitial

_2.0.0 +_

```swift
static func loadAd(request: MaioRequest, callback: MaioInterstitialLoadCallback?) -> MaioInterstitial
```

広告を非同期にロードします。ロードに関するイベントは `callback` パラメーターに通知されます。

#### Parameters

- `request`
    - 広告リクエスト。
- `callback`
    - 広告の読み込みに関するイベントのコールバック。

#### Return Value

生成された `MaioInterstitial` オブジェクト。

### func show(viewContext context: UIViewController, callback: MaioInterstitialShowCallback?)

_2.0.0 +_

```swift
func show(viewContext context: UIViewController, callback: MaioInterstitialShowCallback?)
```

広告を非同期に表示します。表示に関するイベントは `callback` パラメーターに通知されます。

#### Parameters

- `viewContext`
    - 広告表示に使われる `UIViewController`。現在画面に表示されているものを与える。
- `callback`
    - 広告の表示に関するイベントのコールバック。

## MaioInterstitialLoadCallback

_2.0.0 +_

```swift
protocol MaioInterstitialLoadCallback: AnyObject
```

インタースティシャル広告の読み込みに関するコールバックを処理するプロトコル。

### optional func didLoad(_ ad:MaioInterstitial)

_2.0.0 +_

```swift
optional func didLoad(_ ad:MaioInterstitial)
```

広告の読み込みが完了した時に呼ばれるイベント。

#### Parameters

- `ad`
    - 呼び出し元の広告インスタンス。


### optional func didFail(_ ad:MaioInterstitial, errorCode: Int)

_2.0.0 +_

```swift
optional func didFail(_ ad:MaioInterstitial, errorCode: Int)
```

広告の読み込みが完了した時に呼ばれるイベント。

#### Parameters

- `ad`
    - 呼び出し元の広告インスタンス。
- `errorCode`
    - エラー理由を示す値。詳細は `ErrorCode` を参照。



## MaioInterstitialShowCallback

_2.0.0 +_

```swift
protocol MaioInterstitialShowCallback: AnyObject
```

インタースティシャル広告の表示に関するコールバックを処理するプロトコル。

### optional func didOpen(_ ad:MaioInterstitial)

_2.0.0 +_

```swift
optional func didOpen(_ ad:MaioInterstitial)
```

広告がオープンされた時に呼ばれるイベント。

#### Parameters

- `ad`
    - 呼び出し元の広告インスタンス。


### optional func didClose(_ ad:MaioInterstitial)

_2.0.0 +_

```swift
optional func didClose(_ ad:MaioInterstitial)
```

広告がクローズされた時に呼ばれるイベント。

#### Parameters

- `ad`
    - 呼び出し元の広告インスタンス。

### optional func didFail(_ ad:MaioInterstitial, errorCode: Int)

_2.0.0 +_

```swift
optional func didFail(_ ad:MaioInterstitial, errorCode: Int)
```

広告の表示に失敗した時に呼ばれるイベント。

#### Parameters

- `ad`
    - 呼び出し元の広告インスタンス。
- `errorCode`
    - エラー理由を示す値。詳細は `ErrorCode` を参照。

## MaioRewarded

_2.0.0 +_

```swift
class MaioRewarded: NSObject
```

リワード広告の読み込みと表示を管理するクラス。

### static func loadAd(request: MaioRequest, callback: MaioRewardedLoadCallback?) -> MaioRewarded

_2.0.0 +_

```swift
static func loadAd(request: MaioRequest, callback: MaioRewardedLoadCallback?) -> MaioRewarded
```

広告を非同期にロードします。ロードに関するイベントは `callback` パラメーターに通知されます。

#### Parameters

- `request`
    - 広告リクエスト。
- `callback`
    - 広告の読み込みに関するイベントのコールバック。

#### Return Value

生成された `MaioRewarded` オブジェクト。

### func show(viewContext context: UIViewController, callback: MaioRewardedShowCallback?)

_2.0.0 +_

```swift
func show(viewContext context: UIViewController, callback: MaioRewardedShowCallback?)
```

広告を非同期に表示します。表示に関するイベントは `callback` パラメーターに通知されます。

#### Parameters

- `viewContext`
    - 広告表示に使われる `UIViewController`。現在画面に表示されているものを与える。
- `callback`
    - 広告の表示に関するイベントのコールバック。



## RewardData

_2.0.0 +_

```swift
class RewardData: NSObject
```

ユーザーに与える報酬に関するデータを扱うクラス。

### let value: String

_2.0.0 +_

```swift
let value: String
```

maio 管理画面にて当該ゾーンに設定したリワード データ文字列。
未設定の場合は空文字。

## MaioRewardedLoadCallback

_2.0.0 +_

```swift
protocol MaioRewardedLoadCallback: AnyObject
```

リワード広告の読み込みに関するコールバックを処理するプロトコル。

### optional func didLoad(_ ad:MaioRewarded)

_2.0.0 +_

```swift
optional func didLoad(_ ad:MaioRewarded)
```

広告の読み込みが完了した時に呼ばれるイベント。

#### Parameters

- `ad`
    - 呼び出し元の広告インスタンス。


### optional func didFail(_ ad:MaioRewarded, errorCode: Int)

_2.0.0 +_

```swift
optional func didFail(_ ad:MaioRewarded, errorCode: Int)
```

広告の読み込みが完了した時に呼ばれるイベント。

#### Parameters

- `ad`
    - 呼び出し元の広告インスタンス。
- `errorCode`
    - エラー理由を示す値。詳細は `ErrorCode` を参照。



## MaioRewardedShowCallback

_2.0.0 +_

```swift
protocol MaioRewardedShowCallback: AnyObject
```

リワード広告の表示に関するコールバックを処理するプロトコル。

### optional func didOpen(_ ad:MaioRewarded)

_2.0.0 +_

```swift
optional func didOpen(_ ad:MaioRewarded)
```

広告がオープンされた時に呼ばれるイベント。

#### Parameters

- `ad`
    - 呼び出し元の広告インスタンス。


### optional func didClose(_ ad:MaioRewarded)

_2.0.0 +_

```swift
optional func didClose(_ ad:MaioRewarded)
```

広告がクローズされた時に呼ばれるイベント。

#### Parameters

- `ad`
    - 呼び出し元の広告インスタンス。

### optional func didReward(_ ad: MaioRewarded, reward: RewardData)

_2.0.0 +_

```swift
optional func didReward(_ ad: MaioRewarded, reward: RewardData)
```

リワード付与のタイミングで通知されるイベント。
リワード動画広告の場合は視聴完了時、リワードプレイアブル広告の場合は広告で定められたタイミングで通知されます。

#### Parameters

- `ad`
    - 呼び出し元の広告インスタンス。
- `reward`
    - maio 管理画面にてゾーンに設定したリワード データ。


### optional func didFail(_ ad:MaioRewarded, errorCode: Int)

_2.0.0 +_

```swift
optional func didFail(_ ad:MaioRewarded, errorCode: Int)
```

広告の表示に失敗した時に呼ばれるイベント。

#### Parameters

- `ad`
    - 呼び出し元の広告インスタンス。
- `errorCode`
    - エラー理由を示す値。詳細は `ErrorCode` を参照。


## MaioBannerSize

_2.1.7 +_

```swift
class MaioBannerSize: NSObject
```

バナー広告のサイズを表すクラス。

### static let banner: MaioBannerSize

_2.1.7 +_

```swift
static let banner: MaioBannerSize
```

320 x 50 の大きさを表す。

### static let bigBanner: MaioBannerSize

_2.1.7 +_

```swift
static let bigBanner: MaioBannerSize
```

320 x 100 の大きさを表す。

### static let mediumRectangle: MaioBannerSize

_2.1.7 +_

```swift
static let mediumRectangle: MaioBannerSize
```

300 x 250 の大きさを表す。

## MaioBannerView

_2.1.7 +_

```swift
class MaioBannerView: UIView
```

バナー広告の読み込みと表示を管理するクラス。

### @IBInspectable var zoneId: String?

_2.1.7 +_

```swift
@IBInspectable var zoneId: String?
```

maio の管理画面から発行されるゾーン識別子。

### var size: MaioBannerSize?

_2.1.7 +_

```swift
var size: MaioBannerSize?
```

要求するバナーのサイズ。

### var listener: MaioBannerListener?

_2.1.7 +_

```swift
weak var listener: MaioBannerListener?
```

バナー広告のイベントリスナー。

### var rootViewController: UIViewController?

_2.1.7 +_

```swift
weak var rootViewController: UIViewController?
```

AppStore をアプリ内で表示する際のベースとなる `UIViewController`。

### var isReady: Bool

_2.1.7 +_

```swift
var isReady: Bool
```

バナー広告が読み込み済みかどうかを示すフラグ。`true`: 読み込み済み `false`: 未読み込み。

### init(zoneId: String? = nil, size: MaioBannerSize? = nil)

_2.1.7 +_

```swift
init(zoneId: String? = nil, size: MaioBannerSize? = nil)
```

コードベースで `MaioBannerView` を生成する際に用いるコンストラクタ。

#### Parameters

- `zoneId`
    - maio の管理画面から発行されるゾーン識別子
- `size`
    - 要求するバナーのサイズ


### func load(testMode: Bool = false)

_2.1.7 +_

```swift
func load(testMode: Bool = false)
```

#### Parameters

- `testMode`
    - テストモードとしてリクエストするかどうかのフラグ。`true`: テストモード有効 `false`: 本番稼働。

### func pause()

_2.1.7 +_

```swift
func pause()
```

広告に、一時停止のメッセージを送ります。

### func resume()

_2.1.7 +_

```swift
func resume()
```

広告に、再開のメッセージを送ります。

### func destroy()

_2.1.7 +_

```swift
func destroy()
```

手動で広告のリソースを破棄します。以後、インスタンスは広告を動作させられません。

## MaioBannerListener

_2.1.7 +_

```swift
protocol MaioBannerListener: AnyObject
```

バナー広告に関する通知を受け取るためのプロトコル。

### optional func didLoad(_ ad: MaioBannerView)

_2.1.7 +_

```swift
optional func didLoad(_ ad: MaioBannerView)
```

広告の読み込みが完了した時に呼ばれるイベント。

#### Parameters

- `ad`
    - 呼び出し元の広告インスタンス

### optional func didFailToLoad(_ ad: MaioBannerView, errorCode: Int)

_2.1.7 +_

```swift
optional func didFailToLoad(_ ad: MaioBannerView, errorCode: Int)
```

広告の読み込みに失敗した時に呼ばれるイベント。

#### Parameters

- `ad`
    - 呼び出し元の広告インスタンス
- `errorCode`
    - エラー理由を示す値。詳細は `ErrorCode` を参照。

### optional func didMakeImpression(_ ad: MaioBannerView)

_2.1.7 +_

```swift
optional func didMakeImpression(_ ad: MaioBannerView)
```

広告のインプレッションが記録された時に呼ばれるイベント。

#### Parameters

- `ad`
    - 呼び出し元の広告インスタンス

### optional func didClick(_ ad: MaioBannerView)

_2.1.7 +_

```swift
optional func didClick(_ ad: MaioBannerView)
```

広告のクリックが発生した時に呼ばれるイベント。

#### Parameters

- `ad`
    - 呼び出し元の広告インスタンス


### optional func didLeaveApplication(_ ad: MaioBannerView)

_2.1.7 +_

```swift
optional func didLeaveApplication(_ ad: MaioBannerView)
```

アプリケーションからの離脱が発生した時に呼ばれるイベント。

#### Parameters

- `ad`
    - 呼び出し元の広告インスタンス

### optional func didFailToShow(_ ad: MaioBannerView, errorCode: Int)

_2.1.7 +_

```swift
optional func didFailToShow(_ ad: MaioBannerView, errorCode: Int)
```

広告の表示に失敗した時に呼ばれるイベント。

#### Parameters

- `ad`
    - 呼び出し元の広告インスタンス
- `errorCode`
    - エラー理由を示す値。詳細は `ErrorCode` を参照。

## MaioVersion

_2.0.0 +_

```swift
class MaioVersion : NSObject
```

maio SDKのバージョンを表すオブジェクト。


### static let shared: MaioVersion

_2.0.0 +_

```swift
static let shared: MaioVersion
```

SDKのバージョンを表す共有インスタンス。


### func toString() -> String

_2.0.0 +_

```swift
func toString() -> String
```

SDKのバージョンを表す `String` を返す。

#### Return Value

SDK のバージョンを示す、[Semantic Versioning 2.0.0](https://semver.org/lang/ja/) 形式の文字列。

## ErrorCode

_2.0.0 +_

```swift
typealias ErrorCode = Int
```

コールバックから得られるエラーコード。

- 先頭の数字は発生する場面を表しています。
    - `1xxxx` : 広告の読み込み時に起こるもの
    - `2xxxx` : 広告の表示時に起こるもの
- 各エラーコードの末尾にある `xx` は、発生箇所やエラー要因の特定に用います。

| ErrorCode | 意味                                                                             |
|-----------|----------------------------------------------------------------------------------|
| 0         | 不明、あるいは公開を想定していないもの。包括的なエラー処理などによって発生する。 |
| 101xx     | ネットワーク接続がありません。                                                   |
| 102xx     | ネットワーク接続がタイムアウトしました。                                         |
| 103xx     | 広告の取得中に中断されました。                                                   |
| 104xx     | サーバーから正しくないレスポンスが返ってきました。                               |
| 105xx     | 存在しないゾーンが指定されました。                                               |
| 106xx     | 無効なゾーンが指定されました。                                                   |
| 107xx     | 表示可能な広告がありません。                                                     |
| 108xx     | `MaioRequest` が `nil` でした。                                                  |
| 109xx     | ディスク容量が不十分でした。                                                     |
| 110xx     | 対応していない iOS バージョンです。                                              |
| 111xx     | バナーサイズがありません。                                                       |
| 201xx     | 広告の有効期限が切れました。                                                     |
| 202xx     | 広告の準備ができていません。                                                     |
| 203xx     | 広告はすでに表示されています。                                                   |
| 204xx     | 広告の再生中に問題が発生しました。                                               |
| 205xx     | `viewController` が `nil` でした。                                               |
