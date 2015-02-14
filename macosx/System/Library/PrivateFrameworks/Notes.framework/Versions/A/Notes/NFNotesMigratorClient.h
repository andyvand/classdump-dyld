/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NFNotesMigratorDelegate;
#import <Notes/Notes-Structs.h>
@interface NFNotesMigratorClient : NSObject {

	id<NFNotesMigratorDelegate> _delegate;

}

@property (__weak) id<NFNotesMigratorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedInstance;
-(void)setDelegate:(id<NFNotesMigratorDelegate>)arg1 ;
-(void)dealloc;
-(id<NFNotesMigratorDelegate>)delegate;
-(void)migrateNotesToiCloudIfNecessary:(char)arg1 ;
-(void)_handleMigratorFailure:(id)arg1 ;
-(void)_logGenericError:(id)arg1 ;
-(void)_handleXPCErrorWithEvent:(id)arg1 ;
-(id)_newConnection;
-(void)_setAuditSessionOnMessage:(id)arg1 ;
-(void)async_shouldMigrateLocalNotes;
-(char)sync_shouldMigrateLocalNotes;
-(char)sync_hasLocalNotes;
-(void)startService;
@end

