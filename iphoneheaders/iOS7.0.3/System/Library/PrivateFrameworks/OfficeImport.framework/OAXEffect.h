/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXEffect : NSObject
+(id)readEffectsFromXmlNode:(xmlNode*)arg1 packagePart:(id)arg2 drawingState:(id)arg3 ;
+(void)readOuterShadow:(id)arg1 fromXmlNode:(xmlNode*)arg2 ;
+(void)readPresetShadow:(id)arg1 fromXmlNode:(xmlNode*)arg2 ;
+(void)readReflection:(id)arg1 fromXmlNode:(xmlNode*)arg2 ;
+(void)readGlow:(id)arg1 fromXmlNode:(xmlNode*)arg2 ;
+(void)readShadow:(id)arg1 fromXmlNode:(xmlNode*)arg2 ;
+(id)presetShadowTypeEnumMap;
@end
