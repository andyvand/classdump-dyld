/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABRecordContext;

@interface ABGroupDropSource : NSObject {

	ABRecordContext* _recordContext;
	char _isLocalToWindow;

}

@property (readonly) ABRecordContext * recordContext;              //@synthesize recordContext=_recordContext - In the implementation block
@property (readonly) char isLocalToWindow;                         //@synthesize isLocalToWindow=_isLocalToWindow - In the implementation block
-(ABRecordContext *)recordContext;
-(id)initWithRecordContext:(id)arg1 isLocalToWindow:(char)arg2 ;
-(char)isLocalToWindow;
-(void)dealloc;
-(id)description;
@end
