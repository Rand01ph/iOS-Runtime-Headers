/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRSendCommandResultMessageProtobuf : PBCodable <NSCopying> {
    unsigned int _errorCode;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    } _handlerReturnStatus;
    struct { 
        unsigned int errorCode : 1; 
    } _has;
}

@property (nonatomic) unsigned int errorCode;
@property (nonatomic, readonly) unsigned int*handlerReturnStatus;
@property (nonatomic, readonly) unsigned int handlerReturnStatusCount;
@property (nonatomic) BOOL hasErrorCode;

- (void)addHandlerReturnStatus:(unsigned int)arg1;
- (void)clearHandlerReturnStatus;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)errorCode;
- (unsigned int*)handlerReturnStatus;
- (unsigned int)handlerReturnStatusAtIndex:(unsigned int)arg1;
- (unsigned int)handlerReturnStatusCount;
- (BOOL)hasErrorCode;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setHandlerReturnStatus:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setHasErrorCode:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
