/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:48 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBCharacterProperties : NSObject
+(void)readFrom:(id)arg1 wrdProperties:(WrdCharacterProperties*)arg2 document:(id)arg3 properties:(id)arg4 ;
+(id)formattingChangeDate:(const WrdDateTimeRef)arg1 ;
+(void)readFrom:(id)arg1 wrdProperties:(WrdCharacterProperties*)arg2 tracked:(WrdCharacterProperties*)arg3 document:(id)arg4 properties:(id)arg5 ;
+(void)prepareForWriting:(id)arg1 properties:(id)arg2 wrdProperties:(WrdCharacterProperties*)arg3 tracked:(WrdCharacterProperties*)arg4 ;
+(WrdCharacterProperties*)createTrackedPropertiesIfNeeded:(id)arg1 ;
@end
