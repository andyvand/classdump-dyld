/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSXMLNode.h>

@class NSString;

@interface NSXMLElementDeclarationContent : NSXMLNode {

	unsigned long long _contentKind;
	unsigned long long _occurrence;
	NSString* _name;
	NSXMLElementDeclarationContent* _leftChild;
	NSXMLElementDeclarationContent* _rightChild;

}
+(id)createElementContentFromString:(id)arg1 ;
+(id)createElementContent:(xmlElementContent*)arg1 ;
-(void)_XMLStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(xmlElementContent*)libxml2Content;
-(void)setLeftChild:(id)arg1 ;
-(void)setRightChild:(id)arg1 ;
-(void)XMLStringSequenceStarted:(char)arg1 choiceStarted:(char)arg2 appendingToString:(id)arg3 ;
-(unsigned long long)contentKind;
-(unsigned long long)occurrence;
-(id)leftChild;
-(id)rightChild;
-(id)initWithContentKind:(unsigned long long)arg1 occurrence:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)setName:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)name;
@end
