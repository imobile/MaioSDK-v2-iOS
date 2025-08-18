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
