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
    - エラー理由を示す値。詳細は `MaioErrorCode` を参照。


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
    - エラー理由を示す値。詳細は `MaioErrorCode` を参照。

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
