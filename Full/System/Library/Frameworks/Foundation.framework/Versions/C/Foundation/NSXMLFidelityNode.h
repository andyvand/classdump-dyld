/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSXMLNode.h>

@class NSString, NSMutableArray;

@interface NSXMLFidelityNode : NSXMLNode {

	unsigned long long _fidelity;
	NSString* _whitespace;
	NSMutableArray* _ranges;
	NSMutableArray* _names;

}
+(void)setObjectValuePreservingEntitiesForNode:(id)arg1 string:(id)arg2 ;
+(id)stringValueSubstitutingEntitiesForNode:(id)arg1 ranges:(id)arg2 names:(id)arg3 objectValue:(id)arg4 ;
+(unsigned short)charRefToUnicode:(const char*)arg1 ;
-(void)_XMLStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(id)initWithKind:(unsigned long long)arg1 ;
-(void)setStringValue:(id)arg1 resolvingEntities:(char)arg2 ;
-(char)isCDATA;
-(void)setFidelity:(unsigned long long)arg1 ;
-(void)setWhitespace:(id)arg1 ;
-(unsigned long long)fidelity;
-(id)_XMLStringWithCharactersOnly;
-(void)setRanges:(id)arg1 ;
-(void)setNames:(id)arg1 ;
-(void)addEntity:(id)arg1 index:(unsigned long long)arg2 ;
-(id)whitespace;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringValue;
-(id)objectValue;
@end

