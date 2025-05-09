//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/core/graphics/GraphicUtils.java
//

#import <Foundation/Foundation.h>
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMapsforgeCoreGraphicsGraphicUtils")
#ifdef RESTRICT_OrgMapsforgeCoreGraphicsGraphicUtils
#define INCLUDE_ALL_OrgMapsforgeCoreGraphicsGraphicUtils 0
#else
#define INCLUDE_ALL_OrgMapsforgeCoreGraphicsGraphicUtils 1
#endif
#undef RESTRICT_OrgMapsforgeCoreGraphicsGraphicUtils

#if !defined (OrgMapsforgeCoreGraphicsGraphicUtils_) && (INCLUDE_ALL_OrgMapsforgeCoreGraphicsGraphicUtils || defined(INCLUDE_OrgMapsforgeCoreGraphicsGraphicUtils))
#define OrgMapsforgeCoreGraphicsGraphicUtils_

@class IOSFloatArray;
@class JavaLangFloat;
@class JavaLangInteger;

@interface OrgMapsforgeCoreGraphicsGraphicUtils : NSObject

#pragma mark Public

+ (jint)getAlphaWithInt:(jint)color;

+ (IOSFloatArray *)imageSizeWithFloat:(jfloat)picWidth
                            withFloat:(jfloat)picHeight
                            withFloat:(jfloat)scaleFactor
                              withInt:(jint)width
                              withInt:(jint)height
                              withInt:(jint)percent;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeCoreGraphicsGraphicUtils)

FOUNDATION_EXPORT jint OrgMapsforgeCoreGraphicsGraphicUtils_getAlphaWithInt_(jint color);

FOUNDATION_EXPORT IOSFloatArray *OrgMapsforgeCoreGraphicsGraphicUtils_imageSizeWithFloat_withFloat_withFloat_withInt_withInt_withInt_(jfloat picWidth, jfloat picHeight, jfloat scaleFactor, jint width, jint height, jint percent);

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeCoreGraphicsGraphicUtils)


#endif

#pragma pop_macro("INCLUDE_ALL_OrgMapsforgeCoreGraphicsGraphicUtils")
