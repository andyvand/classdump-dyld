/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSString, NSArray;

@interface ABAccountBackupOperation : NSOperation {

	NSString* _backupFilename;

}

@property (readonly) NSString * workingDirectory; 
@property (readonly) NSArray * files; 
@property (readonly) NSString * backupFilename; 
-(NSString *)backupFilename;
-(NSString *)workingDirectory;
-(NSArray *)files;
-(void)dealloc;
-(void)main;
@end
