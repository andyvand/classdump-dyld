/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface AMDelayedUpdaterInfo : NSObject {

	id _updater;
	SEL _selector;
	id _argument;

}

@property (retain,readonly) id updater;               //@synthesize updater=_updater - In the implementation block
@property (readonly) SEL selector;                    //@synthesize selector=_selector - In the implementation block
@property (retain,readonly) id argument;              //@synthesize argument=_argument - In the implementation block
-(id)initWithUpdater:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(id)updater;
-(id)argument;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(SEL)selector;
@end

