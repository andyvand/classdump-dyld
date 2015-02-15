/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABLocking.h>

@protocol ABLocking, ABFileServices;
@class NSString;

@interface ABProcessSharedLock : NSObject <ABLocking> {

	NSString* _lockFilePath;
	NSString* _name;
	id<ABLocking> _localLock;
	long long _localLockCount;
	int _fileDescriptor;
	id<ABFileServices> _fileServices;

}

@property (copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSString * lockFilePath;                  //@synthesize lockFilePath=_lockFilePath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recursiveSharedLockWithLockFilePath:(id)arg1 ;
+(id)sharedLockWithLockFilePath:(id)arg1 ;
+(id)semaphoreSharedLockWithLockFilePath:(id)arg1 ;
-(id)initWithLockFilePath:(id)arg1 localLock:(id)arg2 ;
-(id)initWithLockFilePath:(id)arg1 localLock:(id)arg2 fileServices:(id)arg3 ;
-(char)ensureFileDescriptorIsInvalid:(/*^block*/id)arg1 ;
-(char)openLockFile:(/*^block*/id)arg1 ;
-(char)ensureFileIsLocal:(/*^block*/id)arg1 ;
-(char)isValidFileDescriptor;
-(id)errorUserInfoWithDescription:(id)arg1 ;
-(id)errorUserInfo;
-(id)exceptionWithName:(id)arg1 reason:(id)arg2 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)lock;
-(void)unlock;
-(char)isValid;
-(char)open:(id*)arg1 ;
-(NSString *)lockFilePath;
@end
