/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Dock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface LPCompletionBlock : NSObject {

	/*^block*/id _block;
	NSDictionary* _userinfo;
	unsigned _identifier;

}

@property (assign,nonatomic) unsigned identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSDictionary * userinfo;              //@synthesize userinfo=_userinfo - In the implementation block
-(id)initCompletionBlock:(/*^block*/id)arg1 ;
-(void)setUserinfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userinfo;
-(void)dealloc;
-(void)invalidate;
-(unsigned)identifier;
-(void)setIdentifier:(unsigned)arg1 ;
@end
