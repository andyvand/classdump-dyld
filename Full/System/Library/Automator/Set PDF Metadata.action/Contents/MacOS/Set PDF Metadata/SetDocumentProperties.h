/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:22:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Automator/Set PDF Metadata.action/Contents/MacOS/Set PDF Metadata
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/AMBundleAction.h>

@class NSArrayController;

@interface SetDocumentProperties : AMBundleAction {

	NSArrayController* _keywordsArrayController;

}
-(void)removeKeywordButtonAction:(id)arg1 ;
-(void)addKeywordButtonAction:(id)arg1 ;
-(id)runWithInput:(id)arg1 fromAction:(id)arg2 error:(id*)arg3 ;
-(id)initWithDefinition:(id)arg1 fromArchive:(char)arg2 ;
-(void)dealloc;
@end
