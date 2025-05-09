//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/core/model/LatLong.java
//

#import <Foundation/Foundation.h>
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMapsforgeCoreModelLatLong")
#ifdef RESTRICT_OrgMapsforgeCoreModelLatLong
#define INCLUDE_ALL_OrgMapsforgeCoreModelLatLong 0
#else
#define INCLUDE_ALL_OrgMapsforgeCoreModelLatLong 1
#endif
#undef RESTRICT_OrgMapsforgeCoreModelLatLong

#if !defined (OrgMapsforgeCoreModelLatLong_) && (INCLUDE_ALL_OrgMapsforgeCoreModelLatLong || defined(INCLUDE_OrgMapsforgeCoreModelLatLong))
#define OrgMapsforgeCoreModelLatLong_

#define RESTRICT_JavaLangComparable 1
#define INCLUDE_JavaLangComparable 1
#include "java/lang/Comparable.h"

@class JavaLangBoolean;
@class JavaLangDouble;
@class JavaLangFloat;
@class JavaLangInteger;
@class NSString;

@interface OrgMapsforgeCoreModelLatLong : NSObject < JavaLangComparable > {
 @public
  jdouble latitude_;
  jdouble longitude_;
}

#pragma mark Public

- (instancetype)initWithDouble:(jdouble)latitude
                    withDouble:(jdouble)longitude;

- (instancetype)initWithNSString:(NSString *)wellKnownText;

- (jint)compareToWithId:(OrgMapsforgeCoreModelLatLong *)latLong;

- (OrgMapsforgeCoreModelLatLong *)destinationPointWithDouble:(jdouble)distance
                                                   withFloat:(jfloat)bearing;

- (jdouble)distanceWithOrgMapsforgeCoreModelLatLong:(OrgMapsforgeCoreModelLatLong *)other;

- (bool)isEqual:(id)o;

+ (OrgMapsforgeCoreModelLatLong *)fromMicroDegreesWithInt:(jint)latitudeE6
                                                  withInt:(jint)longitudeE6;

+ (OrgMapsforgeCoreModelLatLong *)fromStringWithNSString:(NSString *)latLonString;

- (jdouble)getLatitude;

- (jint)getLatitudeE6;

- (jdouble)getLongitude;

- (jint)getLongitudeE6;

- (NSUInteger)hash;

- (jdouble)sphericalDistanceWithOrgMapsforgeCoreModelLatLong:(OrgMapsforgeCoreModelLatLong *)other;

- (NSString *)description;

- (jdouble)vincentyDistanceWithOrgMapsforgeCoreModelLatLong:(OrgMapsforgeCoreModelLatLong *)other;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(OrgMapsforgeCoreModelLatLong)

FOUNDATION_EXPORT void OrgMapsforgeCoreModelLatLong_initWithDouble_withDouble_(OrgMapsforgeCoreModelLatLong *self, jdouble latitude, jdouble longitude);

FOUNDATION_EXPORT OrgMapsforgeCoreModelLatLong *new_OrgMapsforgeCoreModelLatLong_initWithDouble_withDouble_(jdouble latitude, jdouble longitude) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMapsforgeCoreModelLatLong *create_OrgMapsforgeCoreModelLatLong_initWithDouble_withDouble_(jdouble latitude, jdouble longitude);

FOUNDATION_EXPORT void OrgMapsforgeCoreModelLatLong_initWithNSString_(OrgMapsforgeCoreModelLatLong *self, NSString *wellKnownText);

FOUNDATION_EXPORT OrgMapsforgeCoreModelLatLong *new_OrgMapsforgeCoreModelLatLong_initWithNSString_(NSString *wellKnownText) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMapsforgeCoreModelLatLong *create_OrgMapsforgeCoreModelLatLong_initWithNSString_(NSString *wellKnownText);

FOUNDATION_EXPORT OrgMapsforgeCoreModelLatLong *OrgMapsforgeCoreModelLatLong_fromMicroDegreesWithInt_withInt_(jint latitudeE6, jint longitudeE6);

FOUNDATION_EXPORT OrgMapsforgeCoreModelLatLong *OrgMapsforgeCoreModelLatLong_fromStringWithNSString_(NSString *latLonString);

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeCoreModelLatLong)


#endif

#pragma pop_macro("INCLUDE_ALL_OrgMapsforgeCoreModelLatLong")
