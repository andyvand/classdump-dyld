/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataDetectorsCore/NSCoding.h>

@class NSString;

@interface DDBinderInfo : NSObject <NSCoding> {

	NSString* _name;
	long long _score;
	id _value;
	int _valueType;
	char _NLPToken;
	char _topLevel;

}

@property (assign) char topLevel;              //@synthesize topLevel=_topLevel - In the implementation block
-(long long)score;
-(void)setScore:(long long)arg1 ;
-(int)valueType;
-(void)setValueType:(int)arg1 ;
-(char)NLPToken;
-(void)setNLPToken:(char)arg1 ;
-(char)isDummy;
-(char)topLevel;
-(void)setTopLevel:(char)arg1 ;
-(id)monxmlAttributes;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)name;
-(void)setValue:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)value;
@end

