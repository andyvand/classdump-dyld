/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:07 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface _NSKeyedCoderOldStyleArray : NSObject {

	void* _addr;
	unsigned _count;
	unsigned _size;
	BOOL _type;
	BOOL _decoded;
	BOOL _padding[2];

}
-(id)initWithObjCType:(BOOL)arg1 count:(unsigned)arg2 at:(const void*)arg3 ;
-(void)fillObjCType:(BOOL)arg1 count:(unsigned)arg2 at:(void*)arg3 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)finalize;
@end
