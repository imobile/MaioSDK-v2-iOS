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


### func load(test: Bool = false)

_2.1.7 +_

```swift
func load(test: Bool = false)
```

#### Parameters

- `test`
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
