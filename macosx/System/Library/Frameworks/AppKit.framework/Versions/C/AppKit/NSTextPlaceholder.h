/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSAttributedString;

@interface NSTextPlaceholder : NSObject {

	id _owner;
	id _text;
	char _committed;
	id _internal;

}

@property (assign) id owner; 
@property (readonly) NSAttributedString * attributedStringValue;              //@synthesize text=_text - In the implementation block
@property (readonly) char committed;                                          //@synthesize committed=_committed - In the implementation block
-(void)dealloc;
-(void)commit;
-(id)identifier;
-(NSAttributedString *)attributedStringValue;
-(void)setOwner:(id)arg1 ;
-(id)owner;
-(void)_postCommitNotification;
-(id)initWithIdentifier:(id)arg1 text:(id)arg2 doCommit:(char)arg3 ;
-(void)setText:(id)arg1 doCommit:(char)arg2 ;
-(char)committed;
@end
