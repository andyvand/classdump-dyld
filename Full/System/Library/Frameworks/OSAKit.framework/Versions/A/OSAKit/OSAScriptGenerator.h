/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/OSAKit.framework/Versions/A/OSAKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OSAScriptElement, NSMutableString;

@interface OSAScriptGenerator : NSObject {

	OSAScriptElement* _element;
	NSMutableString* _text;
	char _needsGeneration;

}
+(id)generatorWithElement:(id)arg1 ;
-(char)needsGeneration;
-(void)setNeedsGeneration:(char)arg1 ;
-(char)generate;
-(id)init;
-(void)dealloc;
-(id)element;
-(id)text;
-(id)initWithElement:(id)arg1 ;
-(void)setElement:(id)arg1 ;
@end

