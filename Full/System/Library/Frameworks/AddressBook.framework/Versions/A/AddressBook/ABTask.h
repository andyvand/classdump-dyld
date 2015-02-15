/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ABTask : NSObject {

	char _cancelled;
	NSString* _name;

}

@property (getter=isCancelled,readonly) char cancelled; 
@property (copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
+(id)taskWithBlock:(/*^block*/id)arg1 ;
+(id)taskWithSubtasks:(id)arg1 ;
+(id)taskWithTask:(id)arg1 transform:(/*^block*/id)arg2 ;
+(char)isValidResult:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(char)cancel;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(char)isCancelled;
-(id)run:(id*)arg1 ;
@end

