/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NSTableUpdateItem2 : NSObject {

	unsigned long long _rowAnimation;
	long long _originalRow;

}

@property (assign,nonatomic) long long originalRow;                          //@synthesize originalRow=_originalRow - In the implementation block
@property (nonatomic,readonly) unsigned long long rowAnimation;              //@synthesize rowAnimation=_rowAnimation - In the implementation block
-(id)description;
-(unsigned long long)rowAnimation;
-(long long)originalRow;
-(id)initWithRowAnimation:(unsigned long long)arg1 ;
-(void)setOriginalRow:(long long)arg1 ;
@end

