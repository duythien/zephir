
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_test.h"
#include "test.h"

#include "Zend/zend_operators.h"
#include "Zend/zend_exceptions.h"
#include "Zend/zend_interfaces.h"

#include "kernel/main.h"


/**
 * Function calls
 */
ZEPHIR_INIT_CLASS(Test_Fcall) {

	ZEPHIR_REGISTER_CLASS(Test, Fcall, fcall, test_fcall_method_entry, 0);


	return SUCCESS;

}

