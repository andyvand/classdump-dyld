/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:52:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class WKDOMRange;

@interface WKDOMTextIterator : NSObject {

	unique_ptr<WebCore::TextIterator, std::__1::default_delete<WebCore::TextIterator> >* _textIterator;
	Vector<unsigned short, 0, WTF::CrashOnOverflow>* _upconvertedText;

}

@property (readonly) char atEnd; 
@property (readonly) WKDOMRange * currentRange; 
@property (readonly) unsigned long long currentTextLength; 
@property (readonly) const unsigned short* currentTextPointer; 
-(void)advance;
-(char)atEnd;
-(WKDOMRange *)currentRange;
-(const unsigned short*)currentTextPointer;
-(unsigned long long)currentTextLength;
-(id)initWithRange:(id)arg1 ;
@end
