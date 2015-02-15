/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/ABFileServices.h>

@protocol ABFileServices <NSObject>
@required
-(int)open:(const char*)arg1 :(int)arg2 :(unsigned short)arg3;
-(int)errnoValue;
-(int)fstatfs:(int)arg1 :(statfs*)arg2;
-(int)fcntl_flock:(int)arg1 :(int)arg2 :(flock*)arg3;
-(int)statfs:(const char*)arg1 :(statfs*)arg2;
-(void*)dlopen:(const char*)arg1 :(int)arg2;
-(void*)dlsym:(void*)arg1 :(const char*)arg2;
-(int)dlclose:(void*)arg1;
-(int)flock:(int)arg1 :(int)arg2;
-(id)NSTemporaryDirectory;
-(int)close:(int)arg1;

@end


@class NSString;

@interface ABFileServices : NSObject <ABFileServices>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(int)open:(const char*)arg1 :(int)arg2 :(unsigned short)arg3 ;
-(int)errnoValue;
-(int)fstatfs:(int)arg1 :(statfs*)arg2 ;
-(int)fcntl_flock:(int)arg1 :(int)arg2 :(flock*)arg3 ;
-(int)statfs:(const char*)arg1 :(statfs*)arg2 ;
-(void*)dlopen:(const char*)arg1 :(int)arg2 ;
-(void*)dlsym:(void*)arg1 :(const char*)arg2 ;
-(int)dlclose:(void*)arg1 ;
-(int)flock:(int)arg1 :(int)arg2 ;
-(id)NSTemporaryDirectory;
-(int)close:(int)arg1 ;
@end

