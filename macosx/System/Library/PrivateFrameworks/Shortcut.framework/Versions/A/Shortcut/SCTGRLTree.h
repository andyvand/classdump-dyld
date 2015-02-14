/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Shortcut.framework/Versions/A/Shortcut
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, SCTGRL, NSMutableArray;

@interface SCTGRLTree : NSObject {

	NSString* mKey;
	SCTGRL* mGRL;
	NSMutableArray* mChildren;
	SCTGRLTree* mParent;

}
-(id)toString;
-(id)initRootWithKey:(id)arg1 withGRLIndex:(id)arg2 ;
-(id)grl;
-(id)newChildWithKey:(id)arg1 ;
-(void)addGRLsInGRLIndex:(id)arg1 ;
-(id)childWithKey:(id)arg1 ;
-(id)setGRL:(id)arg1 ;
-(void)addGRLToTree:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)key;
-(id)parent;
-(id)children;
-(id)addChild:(id)arg1 ;
-(id)setParent:(id)arg1 ;
-(id)setKey:(id)arg1 ;
-(id)initWithKey:(id)arg1 ;
@end

