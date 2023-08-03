#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7.1 (swiftlang-5.7.1.135.3 clang-1400.0.29.51)
#ifndef MAIO_SWIFT_H
#define MAIO_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Maio",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

@class MaioRequest;
@protocol MaioInterstitialLoadCallback;
@class UIViewController;
@protocol MaioInterstitialShowCallback;

/// インタースティシャル広告のロードと表示を管理するクラス。
SWIFT_CLASS("_TtC4Maio16MaioInterstitial")
@interface MaioInterstitial : NSObject
/// <code>load()</code> に渡された広告リクエスト。
@property (nonatomic, readonly, strong) MaioRequest * _Nonnull request;
/// 広告を非同期にロードします。ロードに関するイベントは <code>callback</code> パラメーターに通知されます。
/// \param request 広告リクエスト。
///
/// \param callback 広告のロードに関するイベントのコールバック。
///
///
/// returns:
/// 生成された <code>MaioInterstitial</code> インスタンス。
+ (MaioInterstitial * _Nonnull)loadAdWithRequest:(MaioRequest * _Nonnull)request callback:(id <MaioInterstitialLoadCallback> _Nullable)callback SWIFT_WARN_UNUSED_RESULT;
/// 広告を非同期に表示します。表示に関するイベントは <code>callback</code> パラメーターに通知されます。
/// \param viewContext 現在画面に表示されている <code>UIViewController</code>。
///
/// \param callback 広告の表示に関するイベントのコールバック。
///
- (void)showWithViewContext:(UIViewController * _Nonnull)context callback:(id <MaioInterstitialShowCallback> _Nullable)callback;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// インタースティシャル広告のロードに関するコールバックを処理するプロトコル。
SWIFT_PROTOCOL("_TtP4Maio28MaioInterstitialLoadCallback_")
@protocol MaioInterstitialLoadCallback
@optional
/// 広告のロードが完了した時に呼ばれるイベント。
/// \param ad 呼び出し元の広告インスタンス。
///
- (void)didLoad:(MaioInterstitial * _Nonnull)ad;
/// 広告のロードに失敗した時に呼ばれるイベント。
/// \param ad 呼び出し元の広告インスタンス。
///
/// \param errorCode エラー理由を示す値。詳細は <code>MaioErrorCode</code> を参照。
///
- (void)didFail:(MaioInterstitial * _Nonnull)ad errorCode:(NSInteger)errorCode;
@end


/// インタースティシャル広告の表示に関するコールバックを処理するプロトコル。
SWIFT_PROTOCOL("_TtP4Maio28MaioInterstitialShowCallback_")
@protocol MaioInterstitialShowCallback
@optional
/// 広告がオープンされた時に呼ばれるイベント。
/// \param ad 呼び出し元の広告インスタンス。
///
- (void)didOpen:(MaioInterstitial * _Nonnull)ad;
/// 広告がクローズされた時に呼ばれるイベント。
/// \param ad 呼び出し元の広告インスタンス。
///
- (void)didClose:(MaioInterstitial * _Nonnull)ad;
/// 広告の表示に失敗した時に呼ばれるイベント。
/// \param ad 呼び出し元の広告インスタンス。
///
/// \param errorCode エラー理由を示す値。詳細は <code>MaioErrorCode</code> を参照。
///
- (void)didFail:(MaioInterstitial * _Nonnull)ad errorCode:(NSInteger)errorCode;
@end

@class NSString;

/// 広告リクエストを表すクラス。
SWIFT_CLASS("_TtC4Maio11MaioRequest")
@interface MaioRequest : NSObject
/// maio ゾーン ID。
@property (nonatomic, readonly, copy) NSString * _Nonnull zoneId;
/// テスト広告リクエストなら <code>true</code>、それ以外なら <code>false</code>。
@property (nonatomic, readonly) BOOL testMode;
/// bidData
@property (nonatomic, readonly, copy) NSString * _Nullable bidData;
/// 初期化子。
/// \param zoneId maio ゾーン ID
///
/// \param testMode true: テストモード有効 false: 本番稼働
///
/// \param bidData bidData
///
- (nonnull instancetype)initWithZoneId:(NSString * _Nonnull)zoneId testMode:(BOOL)testMode bidData:(NSString * _Nullable)bidData OBJC_DESIGNATED_INITIALIZER;
/// 通常用いる初期化子。
/// \param zoneId maio ゾーン ID
///
/// \param testMode true: テストモード有効 false: 本番稼働
///
- (nonnull instancetype)initWithZoneId:(NSString * _Nonnull)zoneId testMode:(BOOL)testMode;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@protocol MaioRewardedLoadCallback;
@protocol MaioRewardedShowCallback;

/// リワード広告のロードと表示を管理するクラス。
SWIFT_CLASS("_TtC4Maio12MaioRewarded")
@interface MaioRewarded : NSObject
/// 広告を非同期にロードします。ロードに関するイベントは <code>callback</code> パラメーターに通知されます。
/// \param request 広告リクエスト。
///
/// \param callback 広告のロードに関するイベントのコールバック。
///
///
/// returns:
/// 生成された <code>MaioRewarded</code> インスタンス。
+ (MaioRewarded * _Nonnull)loadAdWithRequest:(MaioRequest * _Nonnull)request callback:(id <MaioRewardedLoadCallback> _Nullable)callback SWIFT_WARN_UNUSED_RESULT;
/// 広告を非同期に表示します。表示に関するイベントは <code>callback</code> パラメーターに通知されます。
/// \param viewContext 現在画面に表示されている <code>UIViewController</code>。
///
/// \param callback 広告の表示に関するイベントのコールバック。
///
- (void)showWithViewContext:(UIViewController * _Nonnull)context callback:(id <MaioRewardedShowCallback> _Nullable)callback;
/// <code>load()</code> に渡された広告リクエスト。
@property (nonatomic, readonly, strong) MaioRequest * _Nonnull request;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// リワード広告のロードに関するコールバックを処理するプロトコル。
SWIFT_PROTOCOL("_TtP4Maio24MaioRewardedLoadCallback_")
@protocol MaioRewardedLoadCallback
@optional
/// 広告のロードが完了した時に呼ばれるイベント。
/// \param ad 呼び出し元の広告インスタンス。
///
- (void)didLoad:(MaioRewarded * _Nonnull)ad;
/// 広告のロードに失敗した時に呼ばれるイベント。
/// \param ad 呼び出し元の広告インスタンス。
///
/// \param errorCode エラー理由を示す値。詳細は <code>MaioErrorCode</code> を参照。
///
- (void)didFail:(MaioRewarded * _Nonnull)ad errorCode:(NSInteger)errorCode;
@end

@class RewardData;

/// リワード広告の表示に関するコールバックを処理するプロトコル。
SWIFT_PROTOCOL("_TtP4Maio24MaioRewardedShowCallback_")
@protocol MaioRewardedShowCallback
@optional
/// 広告がオープンされた時に呼ばれるイベント。
/// \param ad 呼び出し元の広告インスタンス。
///
- (void)didOpen:(MaioRewarded * _Nonnull)ad;
/// 広告がクローズされた時に呼ばれるイベント。
/// \param ad 呼び出し元の広告インスタンス。
///
- (void)didClose:(MaioRewarded * _Nonnull)ad;
/// リワード付与のタイミングで通知されるイベント。
/// リワード動画広告の場合は視聴完了時、リワードプレイアブル広告の場合は広告で定められたタイミングで通知されます。
/// \param ad 呼び出し元の広告インスタンス。
///
/// \param reward maio 管理画面にてゾーンに設定したリワード データ。
///
- (void)didReward:(MaioRewarded * _Nonnull)ad reward:(RewardData * _Nonnull)reward;
/// 広告の表示に失敗した時に呼ばれるイベント。
/// \param ad 呼び出し元の広告インスタンス。
///
/// \param errorCode エラー理由を示す値。詳細は <code>MaioErrorCode</code> を参照。
///
- (void)didFail:(MaioRewarded * _Nonnull)ad errorCode:(NSInteger)errorCode;
@end


/// SDK バージョン情報を管理するクラス。
SWIFT_CLASS("_TtC4Maio11MaioVersion")
@interface MaioVersion : NSObject
/// SDK バージョンを示す共有インスタンス。
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) MaioVersion * _Nonnull shared;)
+ (MaioVersion * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
/// SDK のバージョンを示す、<a href="https://semver.org/lang/ja/">Semantic Versioning 2.0.0</a> 形式の文字列。
- (NSString * _Nonnull)toString SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// ユーザーに与える報酬に関するデータを扱うクラス。
SWIFT_CLASS("_TtC4Maio10RewardData")
@interface RewardData : NSObject
/// maio 管理画面にて当該ゾーンに設定したリワード データ文字列。
/// 未設定の場合は空文字。
@property (nonatomic, readonly, copy) NSString * _Nonnull value;
- (nonnull instancetype)initWithValue:(NSString * _Nonnull)value OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end




#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.7.1 (swiftlang-5.7.1.135.3 clang-1400.0.29.51)
#ifndef MAIO_SWIFT_H
#define MAIO_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Maio",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

@class MaioRequest;
@protocol MaioInterstitialLoadCallback;
@class UIViewController;
@protocol MaioInterstitialShowCallback;

/// インタースティシャル広告のロードと表示を管理するクラス。
SWIFT_CLASS("_TtC4Maio16MaioInterstitial")
@interface MaioInterstitial : NSObject
/// <code>load()</code> に渡された広告リクエスト。
@property (nonatomic, readonly, strong) MaioRequest * _Nonnull request;
/// 広告を非同期にロードします。ロードに関するイベントは <code>callback</code> パラメーターに通知されます。
/// \param request 広告リクエスト。
///
/// \param callback 広告のロードに関するイベントのコールバック。
///
///
/// returns:
/// 生成された <code>MaioInterstitial</code> インスタンス。
+ (MaioInterstitial * _Nonnull)loadAdWithRequest:(MaioRequest * _Nonnull)request callback:(id <MaioInterstitialLoadCallback> _Nullable)callback SWIFT_WARN_UNUSED_RESULT;
/// 広告を非同期に表示します。表示に関するイベントは <code>callback</code> パラメーターに通知されます。
/// \param viewContext 現在画面に表示されている <code>UIViewController</code>。
///
/// \param callback 広告の表示に関するイベントのコールバック。
///
- (void)showWithViewContext:(UIViewController * _Nonnull)context callback:(id <MaioInterstitialShowCallback> _Nullable)callback;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// インタースティシャル広告のロードに関するコールバックを処理するプロトコル。
SWIFT_PROTOCOL("_TtP4Maio28MaioInterstitialLoadCallback_")
@protocol MaioInterstitialLoadCallback
@optional
/// 広告のロードが完了した時に呼ばれるイベント。
/// \param ad 呼び出し元の広告インスタンス。
///
- (void)didLoad:(MaioInterstitial * _Nonnull)ad;
/// 広告のロードに失敗した時に呼ばれるイベント。
/// \param ad 呼び出し元の広告インスタンス。
///
/// \param errorCode エラー理由を示す値。詳細は <code>MaioErrorCode</code> を参照。
///
- (void)didFail:(MaioInterstitial * _Nonnull)ad errorCode:(NSInteger)errorCode;
@end


/// インタースティシャル広告の表示に関するコールバックを処理するプロトコル。
SWIFT_PROTOCOL("_TtP4Maio28MaioInterstitialShowCallback_")
@protocol MaioInterstitialShowCallback
@optional
/// 広告がオープンされた時に呼ばれるイベント。
/// \param ad 呼び出し元の広告インスタンス。
///
- (void)didOpen:(MaioInterstitial * _Nonnull)ad;
/// 広告がクローズされた時に呼ばれるイベント。
/// \param ad 呼び出し元の広告インスタンス。
///
- (void)didClose:(MaioInterstitial * _Nonnull)ad;
/// 広告の表示に失敗した時に呼ばれるイベント。
/// \param ad 呼び出し元の広告インスタンス。
///
/// \param errorCode エラー理由を示す値。詳細は <code>MaioErrorCode</code> を参照。
///
- (void)didFail:(MaioInterstitial * _Nonnull)ad errorCode:(NSInteger)errorCode;
@end

@class NSString;

/// 広告リクエストを表すクラス。
SWIFT_CLASS("_TtC4Maio11MaioRequest")
@interface MaioRequest : NSObject
/// maio ゾーン ID。
@property (nonatomic, readonly, copy) NSString * _Nonnull zoneId;
/// テスト広告リクエストなら <code>true</code>、それ以外なら <code>false</code>。
@property (nonatomic, readonly) BOOL testMode;
/// bidData
@property (nonatomic, readonly, copy) NSString * _Nullable bidData;
/// 初期化子。
/// \param zoneId maio ゾーン ID
///
/// \param testMode true: テストモード有効 false: 本番稼働
///
/// \param bidData bidData
///
- (nonnull instancetype)initWithZoneId:(NSString * _Nonnull)zoneId testMode:(BOOL)testMode bidData:(NSString * _Nullable)bidData OBJC_DESIGNATED_INITIALIZER;
/// 通常用いる初期化子。
/// \param zoneId maio ゾーン ID
///
/// \param testMode true: テストモード有効 false: 本番稼働
///
- (nonnull instancetype)initWithZoneId:(NSString * _Nonnull)zoneId testMode:(BOOL)testMode;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@protocol MaioRewardedLoadCallback;
@protocol MaioRewardedShowCallback;

/// リワード広告のロードと表示を管理するクラス。
SWIFT_CLASS("_TtC4Maio12MaioRewarded")
@interface MaioRewarded : NSObject
/// 広告を非同期にロードします。ロードに関するイベントは <code>callback</code> パラメーターに通知されます。
/// \param request 広告リクエスト。
///
/// \param callback 広告のロードに関するイベントのコールバック。
///
///
/// returns:
/// 生成された <code>MaioRewarded</code> インスタンス。
+ (MaioRewarded * _Nonnull)loadAdWithRequest:(MaioRequest * _Nonnull)request callback:(id <MaioRewardedLoadCallback> _Nullable)callback SWIFT_WARN_UNUSED_RESULT;
/// 広告を非同期に表示します。表示に関するイベントは <code>callback</code> パラメーターに通知されます。
/// \param viewContext 現在画面に表示されている <code>UIViewController</code>。
///
/// \param callback 広告の表示に関するイベントのコールバック。
///
- (void)showWithViewContext:(UIViewController * _Nonnull)context callback:(id <MaioRewardedShowCallback> _Nullable)callback;
/// <code>load()</code> に渡された広告リクエスト。
@property (nonatomic, readonly, strong) MaioRequest * _Nonnull request;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// リワード広告のロードに関するコールバックを処理するプロトコル。
SWIFT_PROTOCOL("_TtP4Maio24MaioRewardedLoadCallback_")
@protocol MaioRewardedLoadCallback
@optional
/// 広告のロードが完了した時に呼ばれるイベント。
/// \param ad 呼び出し元の広告インスタンス。
///
- (void)didLoad:(MaioRewarded * _Nonnull)ad;
/// 広告のロードに失敗した時に呼ばれるイベント。
/// \param ad 呼び出し元の広告インスタンス。
///
/// \param errorCode エラー理由を示す値。詳細は <code>MaioErrorCode</code> を参照。
///
- (void)didFail:(MaioRewarded * _Nonnull)ad errorCode:(NSInteger)errorCode;
@end

@class RewardData;

/// リワード広告の表示に関するコールバックを処理するプロトコル。
SWIFT_PROTOCOL("_TtP4Maio24MaioRewardedShowCallback_")
@protocol MaioRewardedShowCallback
@optional
/// 広告がオープンされた時に呼ばれるイベント。
/// \param ad 呼び出し元の広告インスタンス。
///
- (void)didOpen:(MaioRewarded * _Nonnull)ad;
/// 広告がクローズされた時に呼ばれるイベント。
/// \param ad 呼び出し元の広告インスタンス。
///
- (void)didClose:(MaioRewarded * _Nonnull)ad;
/// リワード付与のタイミングで通知されるイベント。
/// リワード動画広告の場合は視聴完了時、リワードプレイアブル広告の場合は広告で定められたタイミングで通知されます。
/// \param ad 呼び出し元の広告インスタンス。
///
/// \param reward maio 管理画面にてゾーンに設定したリワード データ。
///
- (void)didReward:(MaioRewarded * _Nonnull)ad reward:(RewardData * _Nonnull)reward;
/// 広告の表示に失敗した時に呼ばれるイベント。
/// \param ad 呼び出し元の広告インスタンス。
///
/// \param errorCode エラー理由を示す値。詳細は <code>MaioErrorCode</code> を参照。
///
- (void)didFail:(MaioRewarded * _Nonnull)ad errorCode:(NSInteger)errorCode;
@end


/// SDK バージョン情報を管理するクラス。
SWIFT_CLASS("_TtC4Maio11MaioVersion")
@interface MaioVersion : NSObject
/// SDK バージョンを示す共有インスタンス。
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) MaioVersion * _Nonnull shared;)
+ (MaioVersion * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
/// SDK のバージョンを示す、<a href="https://semver.org/lang/ja/">Semantic Versioning 2.0.0</a> 形式の文字列。
- (NSString * _Nonnull)toString SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// ユーザーに与える報酬に関するデータを扱うクラス。
SWIFT_CLASS("_TtC4Maio10RewardData")
@interface RewardData : NSObject
/// maio 管理画面にて当該ゾーンに設定したリワード データ文字列。
/// 未設定の場合は空文字。
@property (nonatomic, readonly, copy) NSString * _Nonnull value;
- (nonnull instancetype)initWithValue:(NSString * _Nonnull)value OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end




#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
