/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:36 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBGraphic : NSObject
+(void)readGraphicsInChart:(id)arg1 state:(id)arg2 ;
+(id)readMainChartWithState:(id)arg1 ;
+(void)readGraphicsWithState:(id)arg1 ;
+(id)readGraphicWithDictionary:(id)arg1 state:(id)arg2 ;
+(void)readNotesWithDictionary:(id)arg1 state:(id)arg2 ;
+(void)readChart:(id)arg1 chartIndex:(short)arg2 state:(id)arg3 ;
+(void)readOle:(id)arg1 xlGraphicsInfo:(XlGraphicsInfo*)arg2 state:(id)arg3 ;
+(void)readImage:(id)arg1 xlGraphicsInfo:(XlGraphicsInfo*)arg2 state:(id)arg3 ;
+(int)objectTypeForShape:(id)arg1 ;
@end
