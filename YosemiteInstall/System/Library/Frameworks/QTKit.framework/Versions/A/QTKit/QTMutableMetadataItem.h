/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <QTKit/QTMetadataItem.h>

@class NSString, NSLocale, NSDictionary;

@interface QTMutableMetadataItem : QTMetadataItem

@property (copy) id<NSCopying> key; 
@property (copy) NSString * keySpace; 
@property (copy) NSLocale * locale; 
@property (assign) SCD_Struct_QT12 time; 
@property (copy) id<NSCopying> value; 
@property (copy) NSDictionary * extraAttributes; 
-(NSDictionary *)extraAttributes;
-(SCD_Struct_QT12)time;
-(NSString *)keySpace;
-(void)setKeySpace:(NSString *)arg1 ;
-(void)setExtraAttributes:(NSDictionary *)arg1 ;
-(id<NSCopying>)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setValue:(id<NSCopying>)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id<NSCopying>)value;
-(void)setKey:(id<NSCopying>)arg1 ;
-(void)setTime:(SCD_Struct_QT12)arg1 ;
@end
