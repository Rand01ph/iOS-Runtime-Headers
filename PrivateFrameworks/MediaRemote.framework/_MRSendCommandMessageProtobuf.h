/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRSendCommandMessageProtobuf : PBCodable <NSCopying> {
    int _command;
    struct { 
        unsigned int command : 1; 
    } _has;
    _MRCommandOptionsProtobuf *_options;
}

@property (nonatomic) int command;
@property (nonatomic) BOOL hasCommand;
@property (nonatomic, readonly) BOOL hasOptions;
@property (nonatomic, retain) _MRCommandOptionsProtobuf *options;

- (int)command;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCommand;
- (BOOL)hasOptions;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)options;
- (BOOL)readFrom:(id)arg1;
- (void)setCommand:(int)arg1;
- (void)setHasCommand:(BOOL)arg1;
- (void)setOptions:(id)arg1;
- (void)writeTo:(id)arg1;

@end
