// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMAFLOWLAYOUT_H
        #define RECMAFLOWLAYOUT_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "REcmaShellFlowLayout.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaFlowLayout {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getQLayout(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        addItem
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        horizontalSpacing
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        verticalSpacing
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        expandingDirections
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasHeightForWidth
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        heightForWidth
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        count
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        itemAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        minimumSize
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setGeometry
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        sizeHint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        takeAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        insertAction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        indexOf
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        invalidate
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RFlowLayout* getSelf(const QString& fName, QScriptContext* context)
    ;static REcmaShellFlowLayout* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  void fromScriptValue(const QScriptValue& value,
        RFlowLayout*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            RFlowLayout*>(o);
        }
    static  QScriptValue toScriptValue(QScriptEngine *engine,
        RFlowLayout*
        const &in){
            QScriptValue s = engine->newQObject(in, QScriptEngine::QtOwnership,
            QScriptEngine::PreferExistingWrapperObject);
            /*
            if(s.isNull()){
               REcmaHelper::throwError("This object is null.", engine->currentContext());
            }
            */
            return s;
        }
    };
    #endif
    