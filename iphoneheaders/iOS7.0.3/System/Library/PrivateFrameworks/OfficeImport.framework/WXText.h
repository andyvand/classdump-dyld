/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:52 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WXText : NSObject
+(void)readFrom:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readFrom:(xmlNode*)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4 ;
+(void)readFromStream:(xmlTextReaderRef)arg1 state:(id)arg2 ;
+(void)readFromString:(id)arg1 to:(id)arg2 ;
+(void)readFromStream:(xmlTextReaderRef)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4 ;
+(void)updateTextBoxIdsFromState:(id)arg1 ;
+(void)createChildren:(xmlNode*)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4 ;
+(void)createChildrenFromStream:(xmlTextReaderRef)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4 ;
+(id)addNewSectionTo:(id)arg1 state:(id)arg2 ;
+(void)readFromParagraph:(xmlNode*)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4 ;
+(void)readFromTable:(xmlNode*)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4 ;
@end
