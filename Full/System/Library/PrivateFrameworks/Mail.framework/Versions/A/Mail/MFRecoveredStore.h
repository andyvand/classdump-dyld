/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/MFMessageStore.h>

@class NSArray;

@interface MFRecoveredStore : MFMessageStore {

	NSArray* _pathsToImport;

}

@property (nonatomic,copy,readonly) NSArray * pathsToImport;              //@synthesize pathsToImport=_pathsToImport - In the implementation block
-(id)initWithAccount:(id)arg1 ;
-(id)initWithMailbox:(id)arg1 readOnly:(char)arg2 pathsToImport:(id)arg3 ;
-(id)messagesForImporter;
-(id)initWithMailbox:(id)arg1 readOnly:(char)arg2 createEmptyStore:(char)arg3 ;
-(void)writeUpdatedMessageDataToDisk;
-(NSArray *)pathsToImport;
-(id)init;
@end

