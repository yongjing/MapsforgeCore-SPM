//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/core/graphics/FontFamily.java
//

#import <Foundation/Foundation.h>
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMapsforgeCoreGraphicsFontFamily")
#ifdef RESTRICT_OrgMapsforgeCoreGraphicsFontFamily
#define INCLUDE_ALL_OrgMapsforgeCoreGraphicsFontFamily 0
#else
#define INCLUDE_ALL_OrgMapsforgeCoreGraphicsFontFamily 1
#endif
#undef RESTRICT_OrgMapsforgeCoreGraphicsFontFamily

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMapsforgeCoreGraphicsFontFamily_) && (INCLUDE_ALL_OrgMapsforgeCoreGraphicsFontFamily || defined(INCLUDE_OrgMapsforgeCoreGraphicsFontFamily))
#define OrgMapsforgeCoreGraphicsFontFamily_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;
@class NSString;

typedef NS_ENUM(jint, OrgMapsforgeCoreGraphicsFontFamily_Enum) {
  OrgMapsforgeCoreGraphicsFontFamily_Enum_DEFAULT NS_SWIFT_NAME(default) = 0,
  OrgMapsforgeCoreGraphicsFontFamily_Enum_MONOSPACE NS_SWIFT_NAME(monospace) = 1,
  OrgMapsforgeCoreGraphicsFontFamily_Enum_SANS_SERIF NS_SWIFT_NAME(sansSerif) = 2,
  OrgMapsforgeCoreGraphicsFontFamily_Enum_SERIF NS_SWIFT_NAME(serif) = 3,
};

#if J2OBJC_IMPORTED_BY_JAVA_IMPLEMENTATION
#define OrgMapsforgeCoreGraphicsFontFamily_ORDINAL jint
#else
#define OrgMapsforgeCoreGraphicsFontFamily_ORDINAL OrgMapsforgeCoreGraphicsFontFamily_Enum
#endif


@interface OrgMapsforgeCoreGraphicsFontFamily : JavaLangEnum

#pragma mark Public

+ (OrgMapsforgeCoreGraphicsFontFamily *)fromStringWithNSString:(NSString *)value;

+ (OrgMapsforgeCoreGraphicsFontFamily *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (OrgMapsforgeCoreGraphicsFontFamily_Enum)toNSEnum;

@property(readonly) OrgMapsforgeCoreGraphicsFontFamily_Enum enumValue;
+ (OrgMapsforgeCoreGraphicsFontFamily *)fromNSEnum:(OrgMapsforgeCoreGraphicsFontFamily_Enum)value;

- (OrgMapsforgeCoreGraphicsFontFamily_ORDINAL)ordinal NS_SWIFT_UNAVAILABLE("Use .enumValue");

- (nullable instancetype)initWithFontFamily:(OrgMapsforgeCoreGraphicsFontFamily_Enum)value;

@end

J2OBJC_STATIC_INIT(OrgMapsforgeCoreGraphicsFontFamily)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT OrgMapsforgeCoreGraphicsFontFamily *OrgMapsforgeCoreGraphicsFontFamily_values_[];

inline OrgMapsforgeCoreGraphicsFontFamily *OrgMapsforgeCoreGraphicsFontFamily_get_DEFAULT(void);
J2OBJC_ENUM_CONSTANT(OrgMapsforgeCoreGraphicsFontFamily, DEFAULT)

inline OrgMapsforgeCoreGraphicsFontFamily *OrgMapsforgeCoreGraphicsFontFamily_get_MONOSPACE(void);
J2OBJC_ENUM_CONSTANT(OrgMapsforgeCoreGraphicsFontFamily, MONOSPACE)

inline OrgMapsforgeCoreGraphicsFontFamily *OrgMapsforgeCoreGraphicsFontFamily_get_SANS_SERIF(void);
J2OBJC_ENUM_CONSTANT(OrgMapsforgeCoreGraphicsFontFamily, SANS_SERIF)

inline OrgMapsforgeCoreGraphicsFontFamily *OrgMapsforgeCoreGraphicsFontFamily_get_SERIF(void);
J2OBJC_ENUM_CONSTANT(OrgMapsforgeCoreGraphicsFontFamily, SERIF)

FOUNDATION_EXPORT OrgMapsforgeCoreGraphicsFontFamily *OrgMapsforgeCoreGraphicsFontFamily_fromStringWithNSString_(NSString *value);

FOUNDATION_EXPORT IOSObjectArray *OrgMapsforgeCoreGraphicsFontFamily_values(void);

FOUNDATION_EXPORT OrgMapsforgeCoreGraphicsFontFamily *OrgMapsforgeCoreGraphicsFontFamily_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT OrgMapsforgeCoreGraphicsFontFamily *OrgMapsforgeCoreGraphicsFontFamily_fromOrdinal(OrgMapsforgeCoreGraphicsFontFamily_ORDINAL ordinal);

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeCoreGraphicsFontFamily)


#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_OrgMapsforgeCoreGraphicsFontFamily")
