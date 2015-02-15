/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:55:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/bin/class-dump
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <class-dump/class-dump-Structs.h>
#import <class-dump/CDLoadCommand.h>

@class NSString;

@interface CDLCUUID : CDLoadCommand {

	uuid_command _uuidCommand;
	CFUUIDRef _uuid;

}

@property (nonatomic,readonly) NSString * uuidString; 
-(unsigned)cmd;
-(id)initWithDataCursor:(id)arg1 ;
-(unsigned)cmdsize;
-(void)appendToString:(id)arg1 verbose:(char)arg2 ;
-(NSString *)uuidString;
-(void)dealloc;
@end
