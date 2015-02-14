/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface AMSharedDocumentsRegistry : NSObject {

	NSMutableDictionary* _sharedWorkflows;
	char _hasUnsavedChanges;

}
+(id)sharedDocumentsRegistry;
-(id)sharedWorkflows;
-(void)removeSharedWorkflow:(id)arg1 ;
-(id)sharedWorkflowsAcceptingType:(id)arg1 ;
-(void)addSharedWorkflow:(id)arg1 ;
-(void)dealloc;
-(void)synchronize;
@end

