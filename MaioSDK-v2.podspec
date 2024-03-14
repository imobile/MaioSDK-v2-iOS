sdk_version = '2.1.4'

Pod::Spec.new do |s|
  s.name             = 'MaioSDK-v2'
  s.version          = sdk_version
  s.summary          = 'MaioSDK for iOS'
  s.description      = <<-DESC
MaioSDK is Ad SDK of fullscreen movie
                       DESC

  s.homepage         = 'https://maio.jp'
  s.license          = { :type => 'Copyright', :text => 'Copyright 2023 i-mobile' }
  s.author           = 'i-mobile'
  s.source           = { :http => "https://github.com/imobile/MaioSDK-v2-iOS/releases/download/v#{sdk_version}/Maio.xcframework.zip",
                         :type => 'zip' }

  s.vendored_frameworks = 'Maio.xcframework'

  s.platform = :ios
  s.ios.deployment_target = '12.0'

  s.frameworks = 'Foundation', 'UIKit', 'CoreTelephony', 'Network', 'AVFoundation', 'SystemConfiguration', 'AdSupport', 'StoreKit', 'WebKit', 'SafariServices'
  s.library = 'z'
end
