/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface __CNCallStack : NSObject {

	void* _frames;
	unsigned _count;

}
-(int)frameCount;
-(id)copyArrayRepresentation;
-(void*)frames;
-(id)initWithFrames:(void*)arg1 count:(unsigned)arg2 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end
