/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface ABXMLParseNode : NSObject {

	NSString* _string;
	long long _nodeType;
	NSMutableArray* _children;
	ABXMLParseNode* _parent;

}
-(id)childAtIndex:(long long)arg1 ;
-(id)childNodesMatchingString:(id)arg1 ;
-(id)initWithString:(id)arg1 nodeType:(long long)arg2 ;
-(id)objectGraphDescription;
-(long long)nodeType;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)string;
-(id)parent;
-(id)children;
-(void)addChild:(id)arg1 ;
-(void)setParent:(id)arg1 ;
-(char)hasChildren;
-(long long)childCount;
@end

