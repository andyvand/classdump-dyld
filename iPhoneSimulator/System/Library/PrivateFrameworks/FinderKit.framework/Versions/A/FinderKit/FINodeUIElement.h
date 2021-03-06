/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:21 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FinderKit/FinderKit-Structs.h>
@interface FINodeUIElement : NSObject {

	unsigned long long _index;
	TNSRef<NSView *> _containerView;
	TFENode* _node;
	TNSRef<id> _parent;

}

@property (assign,nonatomic) unsigned long long index;              //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) TFENode* node;                         //@synthesize node=_node - In the implementation block
@property (retain) id parent; 
-(void)setIndex:(unsigned long long)arg1 ;
-(id)initWithIndex:(unsigned long long)arg1 containerView:(id)arg2 node:(const TFENode*)arg3 ;
-(void)setSelection:(BOOL)arg1 ;
-(id)description;
-(CGRect)frame;
-(char)isEqual:(id)arg1 ;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityActionDescription:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2 ;
-(id)accessibilityActionNames;
-(unsigned long long)index;
-(id)containerView;
-(TFENode*)node;
-(id)parent;
-(BOOL)isSelected;
-(void)setParent:(id)arg1 ;
-(void)setNode:(TFENode*)arg1 ;
@end

