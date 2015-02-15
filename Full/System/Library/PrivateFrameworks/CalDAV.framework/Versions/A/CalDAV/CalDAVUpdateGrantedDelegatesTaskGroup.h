/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CalDAV/CoreDAVPropPatchTaskDelegate.h>
#import <CalDAV/CoreDAVTaskGroupDelegate.h>

@class NSSet, NSString;

@interface CalDAVUpdateGrantedDelegatesTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate, CoreDAVTaskGroupDelegate> {

	int _state;
	NSSet* _addWriteURLs;
	NSSet* _addReadURLs;
	NSSet* _removeURLs;
	NSSet* _updatedWriteURLs;
	NSSet* _updatedReadURLs;

}

@property (assign,nonatomic) int state;                             //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSSet * addWriteURLs;                  //@synthesize addWriteURLs=_addWriteURLs - In the implementation block
@property (nonatomic,retain) NSSet * addReadURLs;                   //@synthesize addReadURLs=_addReadURLs - In the implementation block
@property (nonatomic,retain) NSSet * removeURLs;                    //@synthesize removeURLs=_removeURLs - In the implementation block
@property (nonatomic,retain) NSSet * updatedWriteURLs;              //@synthesize updatedWriteURLs=_updatedWriteURLs - In the implementation block
@property (nonatomic,retain) NSSet * updatedReadURLs;               //@synthesize updatedReadURLs=_updatedReadURLs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAddWriteURLs:(NSSet *)arg1 ;
-(void)setAddReadURLs:(NSSet *)arg1 ;
-(void)setRemoveURLs:(NSSet *)arg1 ;
-(NSSet *)updatedWriteURLs;
-(NSSet *)updatedReadURLs;
-(NSSet *)addWriteURLs;
-(NSSet *)addReadURLs;
-(NSSet *)removeURLs;
-(void)setUpdatedWriteURLs:(NSSet *)arg1 ;
-(void)setUpdatedReadURLs:(NSSet *)arg1 ;
-(void)_fetchExistingGrantedDelegates;
-(void)_populateUpdatesFromFetched:(id)arg1 allowWrite:(char)arg2 ;
-(void)_updateDelegatesWithAllowWrite:(char)arg1 ;
-(void)dealloc;
-(void)setState:(int)arg1 ;
-(int)state;
-(void)startTaskGroup;
-(void)taskGroup:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)_finishWithError:(id)arg1 state:(int)arg2 ;
-(id)initWithAccountInfoProvider:(id)arg1 addWriteURLs:(id)arg2 addReadURLs:(id)arg3 removeURLs:(id)arg4 taskManager:(id)arg5 ;
-(void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
@end
