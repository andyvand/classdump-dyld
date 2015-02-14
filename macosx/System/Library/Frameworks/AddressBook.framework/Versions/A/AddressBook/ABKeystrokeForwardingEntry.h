/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ABKeystrokeForwardingEntry : NSObject {

	id _target;
	SEL _action;
	/*^block*/id _test;

}

@property (readonly) id target;               //@synthesize target=_target - In the implementation block
@property (readonly) SEL action;              //@synthesize action=_action - In the implementation block
@property (readonly) id test;                 //@synthesize test=_test - In the implementation block
+(id)entryWithTarget:(id)arg1 action:(SEL)arg2 test:(/*^block*/id)arg3 ;
-(id)test;
-(void)dealloc;
-(id)target;
-(SEL)action;
@end

