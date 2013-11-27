/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:44:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSWPCTTypesetterCache : NSObject {

	map<unsigned int, boost::shared_ptr<TSWPParagraphTypesetter>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, boost::shared_ptr<TSWPParagraphTypesetter> > > >* _typesetters;

}
-(void)removeTypesetterForParagraphIndex:(unsigned)arg1 ;
-(shared_ptr<TSWPParagraphTypesetter>*)cachedTypesetterForParagraphIdentifier:(unsigned)arg1 ;
-(void)addTypesetterForParagraphIdentifier:(unsigned)arg1 typesetter:(shared_ptr<TSWPParagraphTypesetter>*)arg2 ;
-(void)p_limitCacheSize:(unsigned)arg1 ;
-(void)dealloc;
-(id).cxx_construct;
-(void)clearCache;
-(void).cxx_destruct;
@end
