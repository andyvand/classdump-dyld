/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:44:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDPartitioner.h>

@class TSWPTOCInfo;

@interface TSWPTOCPartitioner : NSObject <TSDPartitioner> {

	TSWPTOCInfo* _info;

}

@property (nonatomic,readonly) TSWPTOCInfo * info;              //@synthesize info=_info - In the implementation block
-(id)nextHintForSize:(CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(BOOL)arg4 outFinished:(out BOOL*)arg5 ;
-(id)layoutForHint:(id)arg1 parentLayout:(id)arg2 ;
-(id)nextLayoutForSize:(CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(BOOL)arg4 outFinished:(out BOOL*)arg5 ;
-(BOOL)didHint:(id)arg1 syncWithNextHint:(id)arg2 horizontally:(BOOL)arg3 delta:(int)arg4 ;
-(id)hintForLayout:(id)arg1 ;
-(id)initWithInfo:(id)arg1 ;
-(id)info;
@end
