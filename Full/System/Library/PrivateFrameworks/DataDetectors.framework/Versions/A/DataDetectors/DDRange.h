/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:11 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DataDetectors.framework/Versions/A/DataDetectors
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class DOMNode;

@interface DDRange : NSObject {

	DOMNode* _node;
	long long _startOffset;
	long long _endOffset;

}

@property (nonatomic,retain) DOMNode * node;                     //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) long long startOffset;              //@synthesize startOffset=_startOffset - In the implementation block
@property (assign,nonatomic) long long endOffset;                //@synthesize endOffset=_endOffset - In the implementation block
+(id)rangeWithDOMRange:(id)arg1 ;
-(long long)startOffset;
-(long long)endOffset;
-(void)setStartOffset:(long long)arg1 ;
-(void)setEndOffset:(long long)arg1 ;
-(void)dealloc;
-(id)description;
-(DOMNode *)node;
-(void)setNode:(DOMNode *)arg1 ;
-(id)initWithDOMRange:(id)arg1 ;
@end
