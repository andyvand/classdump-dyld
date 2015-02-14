/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface RBNode : NSObject {

	id _key;
	id _value;
	RBNode* _parent;
	RBNode* _left;
	RBNode* _right;
	char _isBlack;

}

@property (retain) RBNode * left;                //@synthesize left=_left - In the implementation block
@property (retain) RBNode * right;               //@synthesize right=_right - In the implementation block
@property (retain) RBNode * parent;              //@synthesize parent=_parent - In the implementation block
@property (assign) id key;                       //@synthesize key=_key - In the implementation block
@property (assign) id value;                     //@synthesize value=_value - In the implementation block
@property (assign) char isBlack;                 //@synthesize isBlack=_isBlack - In the implementation block
-(RBNode *)left;
-(void)setLeft:(RBNode *)arg1 ;
-(RBNode *)right;
-(void)setRight:(RBNode *)arg1 ;
-(void)dealloc;
-(id)key;
-(void)setValue:(id)arg1 ;
-(RBNode *)parent;
-(void)setParent:(RBNode *)arg1 ;
-(id)value;
-(void)setKey:(id)arg1 ;
-(char)isBlack;
-(void)setIsBlack:(char)arg1 ;
@end

