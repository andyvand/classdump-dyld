/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <QTKit/NSCopying.h>
#import <QTKit/NSMutableCopying.h>
#import <QTKit/NSCoding.h>

@class QTMetadataItemInternal, NSString, NSNumber, NSDate, NSData, NSLocale, NSDictionary;

@interface QTMetadataItem : NSObject <NSCopying, NSMutableCopying, NSCoding> {

	QTMetadataItemInternal* _priv;

}

@property (readonly) NSString * stringValue; 
@property (readonly) NSNumber * numberValue; 
@property (readonly) NSDate * dateValue; 
@property (readonly) NSData * dataValue; 
@property (copy,readonly) id<NSCopying> key; 
@property (copy,readonly) NSString * keySpace; 
@property (copy,readonly) NSLocale * locale; 
@property (readonly) SCD_Struct_QT12 time; 
@property (copy,readonly) id<NSCopying> value; 
@property (copy,readonly) NSDictionary * extraAttributes; 
+(id)metadataItemsFromArray:(id)arg1 withKey:(id)arg2 keySpace:(id)arg3 ;
+(id)metadataItemsFromArray:(id)arg1 withLocale:(id)arg2 ;
+(void)initialize;
-(NSNumber *)numberValue;
-(NSDictionary *)extraAttributes;
-(SCD_Struct_QT12)time;
-(NSString *)keySpace;
-(NSData *)dataValue;
-(id)initWithAttributes:(id)arg1 value:(id)arg2 ;
-(id)initWithKey:(id)arg1 keySpace:(id)arg2 locale:(id)arg3 time:(SCD_Struct_QT12)arg4 value:(id)arg5 extraAttributes:(id)arg6 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id<NSCopying>)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSLocale *)locale;
-(NSDate *)dateValue;
-(id<NSCopying>)value;
@end

