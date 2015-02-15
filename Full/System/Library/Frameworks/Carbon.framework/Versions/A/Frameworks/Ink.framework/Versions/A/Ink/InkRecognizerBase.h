/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/Ink.framework/Versions/A/Ink
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Ink/Ink-Structs.h>
@interface InkRecognizerBase : NSObject {

	unsigned short _majorVersion;
	unsigned short _minorVersion;
	unsigned _modifiers;
	unsigned _flags;
	unsigned char _baseTermination;
	CGRect _bounds;
	char _isKeyboardShortcut;
	char _hasActiveTSM;

}
+(unsigned)eventKindForInkRecognizerData:(id)arg1 ;
-(unsigned)modifiers;
-(unsigned char)termType;
-(char)isKeyboardShortcut;
-(id)initWithMajorVers:(unsigned short)arg1 minorVers:(unsigned short)arg2 modifers:(unsigned)arg3 flags:(unsigned)arg4 baseTerm:(unsigned char)arg5 andBounds:(CGRect)arg6 ;
-(id)initWithInkRecognizerBase:(id)arg1 ;
-(char)hasActiveTSM;
-(void)setActiveTSM:(char)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

