/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CoreDAVAction : NSObject {

	int _action;
	id _context;
	id _changeContext;

}

@property (nonatomic,readonly) int action;                  //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) id context;                  //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id changeContext;              //@synthesize changeContext=_changeContext - In the implementation block
-(void)dealloc;
-(id)description;
-(id)context;
-(int)action;
-(id)initWithAction:(int)arg1 context:(id)arg2 ;
-(id)changeContext;
-(void)setChangeContext:(id)arg1 ;
@end

